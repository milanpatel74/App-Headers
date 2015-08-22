/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNViewController.h>
#import <Twitter/T1DirectMessageUserPickerViewControllerDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1DirectMessageConversationHost.h>

@protocol T1DirectMessageConversationHost;
@class TFNTwitterAccount, T1DirectMessageInbox, T1DirectMessageCreateConversationSharedContent, NSString, T1DirectMessageUserPickerViewController, UIView;

@interface T1DirectMessageCreateConversationViewController : TFNViewController <T1DirectMessageUserPickerViewControllerDelegate, TFNTwitterAuthenticated, T1DirectMessageConversationHost> {

	BOOL _isPresentedFromEmptyState;
	TFNTwitterAccount* _account;
	id<T1DirectMessageConversationHost> _host;
	T1DirectMessageInbox* _inbox;
	unsigned long long _maximumParticipantCount;
	T1DirectMessageCreateConversationSharedContent* _sharedContent;
	NSString* _prefilledText;
	NSString* _scribeSection;
	T1DirectMessageUserPickerViewController* _userPickerViewController;
	UIView* _containerView;

}

@property (assign,nonatomic,__weak) id<T1DirectMessageConversationHost> host;                                 //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) T1DirectMessageInbox * inbox;                                                    //@synthesize inbox=_inbox - In the implementation block
@property (assign,nonatomic) BOOL requireCanDMForTypeaheadResults; 
@property (assign,nonatomic) unsigned long long maximumParticipantCount;                                      //@synthesize maximumParticipantCount=_maximumParticipantCount - In the implementation block
@property (nonatomic,retain) T1DirectMessageCreateConversationSharedContent * sharedContent;                  //@synthesize sharedContent=_sharedContent - In the implementation block
@property (nonatomic,copy) NSString * prefilledText;                                                          //@synthesize prefilledText=_prefilledText - In the implementation block
@property (nonatomic,copy) NSString * scribeSection;                                                          //@synthesize scribeSection=_scribeSection - In the implementation block
@property (assign,nonatomic) BOOL isPresentedFromEmptyState;                                                  //@synthesize isPresentedFromEmptyState=_isPresentedFromEmptyState - In the implementation block
@property (nonatomic,retain) T1DirectMessageUserPickerViewController * userPickerViewController;              //@synthesize userPickerViewController=_userPickerViewController - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                          //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                     //@synthesize account=_account - In the implementation block
-(id)scribe;
-(id)scribePage;
-(NSString *)scribeSection;
-(void)setScribeSection:(NSString *)arg1 ;
-(void)setSharedContent:(T1DirectMessageCreateConversationSharedContent *)arg1 ;
-(void)setRequireCanDMForTypeaheadResults:(BOOL)arg1 ;
-(void)setMaximumParticipantCount:(unsigned long long)arg1 ;
-(void)_presentErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)userPickerViewController:(id)arg1 didSelectConversation:(id)arg2 ;
-(void)userPickerViewController:(id)arg1 didSelectUser:(id)arg2 ;
-(void)userPickerViewController:(id)arg1 didRemoveUser:(id)arg2 ;
-(BOOL)requireCanDMForTypeaheadResults;
-(BOOL)showsSearchButton;
-(BOOL)showsComposeButton;
-(T1DirectMessageInbox *)inbox;
-(void)presentConversation:(id)arg1 withSharedContent:(id)arg2 text:(id)arg3 options:(unsigned long long)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)setPrefilledText:(NSString *)arg1 ;
-(T1DirectMessageUserPickerViewController *)userPickerViewController;
-(T1DirectMessageCreateConversationSharedContent *)sharedContent;
-(void)_transitionToConversationWithSelectedUsers;
-(BOOL)_shouldEnableNextButton;
-(void)_updateViews;
-(unsigned long long)maximumParticipantCount;
-(void)setUserPickerViewController:(T1DirectMessageUserPickerViewController *)arg1 ;
-(void)_transitionToConversation:(id)arg1 ;
-(void)_legacyTransitionToConversation:(id)arg1 ;
-(NSString *)prefilledText;
-(BOOL)isPresentedFromEmptyState;
-(void)setIsPresentedFromEmptyState:(BOOL)arg1 ;
-(void)_addConversationViewController:(id)arg1 ;
-(void)_removeContainedViewControllers;
-(void)setInbox:(T1DirectMessageInbox *)arg1 ;
-(void)_cancelTapped:(id)arg1 ;
-(UIView *)containerView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewDidLoad;
-(id<T1DirectMessageConversationHost>)host;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)setHost:(id<T1DirectMessageConversationHost>)arg1 ;
@end
