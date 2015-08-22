/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MNForwardMessageView : UIView {

	UIView* _composerView;
	UIView* _suggestionsView;
	UIView* _separatorView;
	UIView* _dimmingView;
	BOOL _composerViewHidden;
	BOOL _showsBlockingUI;
	double _suggestionsViewOffset;

}

@property (assign,nonatomic) double suggestionsViewOffset;              //@synthesize suggestionsViewOffset=_suggestionsViewOffset - In the implementation block
@property (assign,nonatomic) BOOL showsBlockingUI;                      //@synthesize showsBlockingUI=_showsBlockingUI - In the implementation block
-(void)setShowsBlockingUI:(BOOL)arg1 ;
-(BOOL)showsBlockingUI;
-(void)setSuggestionsViewOffset:(double)arg1 ;
-(void)_layoutComposerViewInBounds:(CGRect)arg1 ;
-(CGRect)_composerViewFrameInSize:(CGSize)arg1 ;
-(double)_composerViewOriginYWithComposerViewHeight:(double)arg1 ;
-(double)suggestionsViewOffset;
-(id)initWithComposerView:(id)arg1 suggestionsView:(id)arg2 ;
-(double)suggestionsViewTopContentInset;
-(void)setComposerViewHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
@end
