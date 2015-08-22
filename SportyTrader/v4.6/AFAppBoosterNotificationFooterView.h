/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@protocol AFAppBoosterNotificationFooterViewDelegate;
@class UIButton, UIView;

@interface AFAppBoosterNotificationFooterView : UIView {

	id<AFAppBoosterNotificationFooterViewDelegate> _delegate;
	UIButton* _buttonOpenFeedback;
	UIButton* _buttonReadAll;
	UIButton* _buttonBack;
	UIView* _separatorViewVeritcal;
	UIView* _separatorViewHorizontal;

}

@property (assign,nonatomic,__weak) id<AFAppBoosterNotificationFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * buttonOpenFeedback;                                             //@synthesize buttonOpenFeedback=_buttonOpenFeedback - In the implementation block
@property (nonatomic,readonly) UIButton * buttonReadAll;                                                  //@synthesize buttonReadAll=_buttonReadAll - In the implementation block
@property (nonatomic,readonly) UIButton * buttonBack;                                                     //@synthesize buttonBack=_buttonBack - In the implementation block
@property (nonatomic,readonly) UIView * separatorViewVeritcal;                                            //@synthesize separatorViewVeritcal=_separatorViewVeritcal - In the implementation block
@property (nonatomic,readonly) UIView * separatorViewHorizontal;                                          //@synthesize separatorViewHorizontal=_separatorViewHorizontal - In the implementation block
-(UIButton *)buttonReadAll;
-(UIView *)separatorViewVeritcal;
-(UIButton *)buttonOpenFeedback;
-(UIButton *)buttonBack;
-(id)_commonButtonWithFrame;
-(void)_buttonReadAllTouched;
-(void)_buttonOpenFeedbackTouched;
-(void)_buttonGoBackTouched;
-(UIView *)separatorViewHorizontal;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AFAppBoosterNotificationFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<AFAppBoosterNotificationFooterViewDelegate>)delegate;
@end
