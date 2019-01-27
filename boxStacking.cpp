// Box Stacking

struct Box
{
    int box_height;
    int box_width;
    int box_length;
};

bool compare( Box box_1, Box box_2 )
{
    return (( box_1.box_width * box_1.box_length ) > ( box_2.box_width * box_2.box_length ));
}

int maxHeight(int height[],int width[],int length[],int n)
{
    vector<Box> boxes;
    
    for( int i = 0; i < n; i++ )
    {
        Box b;
        b.box_height = height[i];
        b.box_width = min(width[i],length[i]);
        b.box_length = max(width[i],length[i]);
        boxes.push_back(b);
        
        b.box_height = width[i];
        b.box_width = min(height[i],length[i]);
        b.box_length = max(height[i],length[i]);
        boxes.push_back(b);
        
        b.box_height = length[i];
        b.box_width = min(width[i],height[i]);
        b.box_length = max(width[i],height[i]);
        boxes.push_back(b);
    }
    
    sort( boxes.begin(), boxes.end(), compare );
    
    vector<int> maxHeight( boxes.size() );
    
    for( int i = 0; i < boxes.size(); i++ ) maxHeight[i] = boxes[i].box_height;
    
    int maximo = maxHeight[0];
    
    for( int i = 1; i < boxes.size(); i++ )
    {
        for( int j = 0; j < i; j++ )
        {
            if( boxes[j].box_width > boxes[i].box_width &&
                boxes[j].box_length > boxes[i].box_length )
                {
                    maxHeight[i] = max( maxHeight[i], maxHeight[j] + boxes[i].box_height );
                    
                    if( maximo < maxHeight[i] ) maximo = maxHeight[i];
                }
        }
    }
    
    return maximo;
}
