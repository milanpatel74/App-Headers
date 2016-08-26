/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@protocol FBUFIPopularFeedbackComponentDelegate;
@class FBMemFeedback, FBFeedToolbox, NSArray, FBUFIExpandReactionButtonsComponent, FBUFIButtonComponent, CKComponent;

@interface FBUFIPopularFeedbackComponent : CKComponent {

	FBMemFeedback* _feedback;
	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	SEL _countsAction;
	FBUFIExpandReactionButtonsComponent* _buttonStack;
	FBUFIButtonComponent* _detailsButton;
	CKComponent* _backgroundTapComponent;
	id<FBUFIPopularFeedbackComponentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBUFIPopularFeedbackComponentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithFeedback:(id)arg1 reactionDataProvider:(id)arg2 style:(const FBUFIFeedbackSummaryContainerComponentStyle*)arg3 toolbox:(id)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(void)moreButtonTapped:(id)arg1 ;
-(void)didTap:(id)arg1 reactionKey:(id)arg2 ;
-(void)detailButtonTapped:(id)arg1 ;
-(void)handleBackgroundTap;
-(void)setDelegate:(id<FBUFIPopularFeedbackComponentDelegate>)arg1 ;
-(id<FBUFIPopularFeedbackComponentDelegate>)delegate;
@end
