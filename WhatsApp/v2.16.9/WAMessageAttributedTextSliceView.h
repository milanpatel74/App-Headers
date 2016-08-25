/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageContainerSliceView.h>
#import <WhatsApp/WAMessageWordsHighlighting.h>

@class WAMessageAttributedTextSliceLink, WAMessageAttributedTextSlice;

@interface WAMessageAttributedTextSliceView : WAMessageContainerSliceView <WAMessageWordsHighlighting> {

	WAMessageAttributedTextSliceLink* _trackedLink;
	WAMessageAttributedTextSliceLink* _highlightedLink;

}

@property (nonatomic,readonly) WAMessageAttributedTextSlice * slice; 
+(BOOL)supportsPreviewing;
+(BOOL)isUserInteractionEnabled;
-(void)reloadSliceAfterChange:(unsigned long long)arg1 ;
-(id)dataForPreviewingContext:(id)arg1 location:(CGPoint)arg2 ;
-(id)wa_accessibilityElements;
-(void)touchesDidEnd;
-(BOOL)shouldHighlightContainerViewOnTouchesDidBegin;
-(void)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(void)touchesWillBegin:(id)arg1 ;
-(void)handleLongPressAtPoint:(CGPoint)arg1 ;
-(void)setHighlightedWords:(id)arg1 ;
-(void)fillRects:(id)arg1 ;
-(id)linkAtPoint:(CGPoint)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
