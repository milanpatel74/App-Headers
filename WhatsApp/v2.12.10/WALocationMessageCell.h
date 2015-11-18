/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WALargeMediaMessageCell.h>

@class WAPlaceInfoView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface WALocationMessageCell : WALargeMediaMessageCell {

	WAPlaceInfoView* _placeInfoView;
	BOOL _hasPlaceInfo;
	CGPoint _initialHighlightTouchLocation;
	UILongPressGestureRecognizer* _highlightTrackingGesture;
	UITapGestureRecognizer* _contentSingleTapGestureRecognizer;
	UITapGestureRecognizer* _contentDoubleTapGestureRecognizer;
	UILongPressGestureRecognizer* _contentLongPressGestureRecognizer;

}
+(UIEdgeInsets)contentInsetsForCellData:(id)arg1 cellWidth:(double)arg2 ;
+(id)cellReuseIdentifier;
+(double)maximumImageWidth;
-(void)handleContentDoubleTapGesture:(id)arg1 ;
-(void)handleContentTapGesture:(id)arg1 ;
-(void)handleContentLongPressGesture:(id)arg1 ;
-(void)configureCellWithAnimation:(BOOL)arg1 ;
-(void)handleTapOnBubbleWithLocation:(CGPoint)arg1 ;
-(void)handleDoubleTapOnBubbleWithLocation:(CGPoint)arg1 ;
-(void)handleLongPressOnBubbleWithLocation:(CGPoint)arg1 ;
-(void)prepareFor3DTouchPreviewWithContext:(id)arg1 ;
-(void)configureForAccessibility;
-(void)updateStarIndicatorAnimated:(BOOL)arg1 ;
-(BOOL)canPerformCopy;
-(void)performCopy;
-(id)registerSubviewsForPreviewingUsingViewController:(id)arg1 previewingDelegate:(id)arg2 ;
-(id)dataForPreviewingContext:(id)arg1 atLocation:(CGPoint)arg2 ;
-(id)accessibilityHintText;
-(id)accessibilityValueText;
-(void)handleHighlightTrackingGesture:(id)arg1 ;
-(void)showPopupMenu;
-(BOOL)canEnableHighlightTrackingGesture;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDimmed:(BOOL)arg1 ;
@end
