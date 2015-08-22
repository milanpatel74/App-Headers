/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/MNLoadingViewControllerObserver.h>

@protocol MNMessagesViewPresentationStrategy;
@class MNLoadingViewController, NSString;

@interface MNMessagesViewPresenter : NSObject <FBSessionClassProvidable, MNLoadingViewControllerObserver> {

	/*^block*/id _presentationErrorHandlerCreatorBlock;
	BOOL _canTouchNavigationStack;
	unsigned long long _loadingVCPushState;
	unsigned long long _messagesVCPushState;
	BOOL _redrawPending;
	BOOL _presentationCompleteScheduled;
	BOOL _presentationCancelled;
	BOOL _isPresentationStrategyExecuting;
	BOOL _isTearingDown;
	/*^block*/id _pushMessagesVCBlock;
	/*^block*/id _pushLoadingVCBlock;
	/*^block*/id _popLoadingVCBlock;
	/*^block*/id _userCancelledPresentationBlock;
	MNLoadingViewController* _loadingViewController;
	id<MNMessagesViewPresentationStrategy> _presentationStrategy;

}

@property (assign,nonatomic) BOOL isPresentationStrategyExecuting;                                     //@synthesize isPresentationStrategyExecuting=_isPresentationStrategyExecuting - In the implementation block
@property (assign,nonatomic) BOOL isTearingDown;                                                       //@synthesize isTearingDown=_isTearingDown - In the implementation block
@property (nonatomic,copy) id pushMessagesVCBlock;                                                     //@synthesize pushMessagesVCBlock=_pushMessagesVCBlock - In the implementation block
@property (nonatomic,copy) id pushLoadingVCBlock;                                                      //@synthesize pushLoadingVCBlock=_pushLoadingVCBlock - In the implementation block
@property (nonatomic,copy) id popLoadingVCBlock;                                                       //@synthesize popLoadingVCBlock=_popLoadingVCBlock - In the implementation block
@property (nonatomic,copy) id userCancelledPresentationBlock;                                          //@synthesize userCancelledPresentationBlock=_userCancelledPresentationBlock - In the implementation block
@property (nonatomic,retain) MNLoadingViewController * loadingViewController;                          //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (nonatomic,retain) id<MNMessagesViewPresentationStrategy> presentationStrategy;              //@synthesize presentationStrategy=_presentationStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNMessagesViewPresentationStrategy>)presentationStrategy;
-(id)initWithPresentationErrorHandlerCreatorBlock:(/*^block*/id)arg1 ;
-(void)_cleanUpPresentation;
-(void)cancelPendingPresentation;
-(void)setPushMessagesVCBlock:(id)arg1 ;
-(void)setPushLoadingVCBlock:(id)arg1 ;
-(void)setPopLoadingVCBlock:(id)arg1 ;
-(void)setPresentationStrategy:(id<MNMessagesViewPresentationStrategy>)arg1 ;
-(void)setUserCancelledPresentationBlock:(id)arg1 ;
-(void)_strategyWantsToPushMessagesVC;
-(void)_strategyWantsToPushLoadingVC;
-(void)_handleTearDownPresentation;
-(void)_popLoadingViewController;
-(void)_pushMessagesViewController;
-(void)_pushLoadingViewController;
-(MNLoadingViewController *)loadingViewController;
-(void)setLoadingViewController:(MNLoadingViewController *)arg1 ;
-(void)loadingControllerDidBeginAnimation:(id)arg1 ;
-(void)loadingControllerDidEndAnimation:(id)arg1 ;
-(void)presentMessagesViewController:(id)arg1 withStrategy:(id)arg2 loadingController:(id)arg3 pushMessagesVCBlock:(/*^block*/id)arg4 pushLoadingVCBlock:(/*^block*/id)arg5 popLoadingVCBlock:(/*^block*/id)arg6 userCancelledPresentationBlock:(/*^block*/id)arg7 ;
-(BOOL)isPresentationStrategyExecuting;
-(void)setIsPresentationStrategyExecuting:(BOOL)arg1 ;
-(BOOL)isTearingDown;
-(void)setIsTearingDown:(BOOL)arg1 ;
-(id)pushMessagesVCBlock;
-(id)pushLoadingVCBlock;
-(id)popLoadingVCBlock;
-(id)userCancelledPresentationBlock;
-(void)dealloc;
-(id)init;
@end
