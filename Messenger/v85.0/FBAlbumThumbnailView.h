/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBWebPhotoView, UIView, FBMemPhoto;

@interface FBAlbumThumbnailView : UIView {

	FBWebPhotoView* _frontView;
	UIView* _middleView;
	UIView* _backView;

}

@property (nonatomic,retain) FBMemPhoto * photo; 
@property (nonatomic,retain) UIView * customThumbnailView; 
-(void)setCustomThumbnailView:(UIView *)arg1 ;
-(UIView *)customThumbnailView;
-(void)layoutSubviews;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBMemPhoto *)photo;
@end
