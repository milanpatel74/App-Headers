/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Facebook/FBLoadingView.h>

@class NSMutableArray, NSString;

@interface FBDefaultLoadingView : UIScrollView <FBLoadingView> {

	NSMutableArray* _shimmeringStoryCardViews;
	BOOL _loading;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
-(id)_dequeueShimmeringStoryCardViewAtIndex:(unsigned long long)arg1 frame:(CGRect)arg2 ;
-(void)_clearUnusedViewsStartingFromIndex:(unsigned long long)arg1 ;
-(void)_updateShimmeringContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
@end
