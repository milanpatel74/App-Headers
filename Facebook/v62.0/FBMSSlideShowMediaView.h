/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, NSArray, FBFeedToolbox;

@interface FBMSSlideShowMediaView : UIView {

	long long _imagesDownloadState;
	BOOL _isAnimating;
	unsigned long long _currentIndex;
	NSMutableArray* _images;
	UIImageView* _imageView;
	NSArray* _imageURLs;
	FBFeedToolbox* _toolbox;

}
-(void)setIsAnimating:(BOOL)arg1 ;
-(id)initWithImageURLs:(id)arg1 toolbox:(id)arg2 ;
-(void)downloadImageAtIndex:(unsigned long long)arg1 ;
-(void)animateImages;
-(void)layoutSubviews;
-(id)nextImage;
@end
