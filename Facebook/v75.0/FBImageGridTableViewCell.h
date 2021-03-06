/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBDisabling.h>

@protocol FBImageGridTableViewCellDelegate;
@class UIView, UITapGestureRecognizer, NSArray, NSString;

@interface FBImageGridTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, FBDisabling> {

	UIView* _disabledOverlayView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _disabled;
	NSArray* _tappableGridPhotoViews;
	id<FBImageGridTableViewCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * tappableGridPhotoViews;                                    //@synthesize tappableGridPhotoViews=_tappableGridPhotoViews - In the implementation block
@property (assign,nonatomic,__weak) id<FBImageGridTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                   //@synthesize disabled=_disabled - In the implementation block
+(unsigned long long)gridCellsPerRow;
+(double)imageSizeForWidth:(double)arg1 ;
+(double)rowHeightForWidth:(double)arg1 ;
+(double)bottomCellPadding;
+(double)topCellPadding;
+(unsigned long long)rowIndexFromItemIndex:(unsigned long long)arg1 ;
+(unsigned long long)columnFromItemIndex:(unsigned long long)arg1 ;
+(unsigned long long)itemIndexForRowIndex:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
+(unsigned long long)indexOfTableViewCellAtCenterOfTableView:(id)arg1 ;
-(void)didReceiveTapWithGestureRecognizer:(id)arg1 ;
-(void)_updateDisabledState;
-(id)initWithWidth:(double)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 session:(id)arg4 ;
-(NSArray *)tappableGridPhotoViews;
-(void)setTappableGridPhotoViews:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBImageGridTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id<FBImageGridTableViewCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
@end

