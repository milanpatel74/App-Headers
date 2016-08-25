/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ImageLoadingDelegate;
@class TextureAtlasImage;

@interface ImageLoadingTask : NSObject {

	TextureAtlasImage* image;
	id<ImageLoadingDelegate> delegate;

}

@property (nonatomic,retain) TextureAtlasImage * image; 
@property (assign,nonatomic) id<ImageLoadingDelegate> delegate; 
-(id)initWithPath:(id)arg1 delegate:(id)arg2 ;
-(void)setImage:(TextureAtlasImage *)arg1 ;
-(void)setDelegate:(id<ImageLoadingDelegate>)arg1 ;
-(void)dealloc;
-(id<ImageLoadingDelegate>)delegate;
-(TextureAtlasImage *)image;
@end
