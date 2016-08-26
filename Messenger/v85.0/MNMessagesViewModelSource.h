/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, MNIndexedAppMessageSet, MNThreadViewModel, MNAppMessage, MNThreadMontageViewModel, NSDictionary, FBMMessageKey;

@interface MNMessagesViewModelSource : FBValueObject <NSCopying> {

	BOOL _showLoadingIndicator;
	BOOL _isTypingActive;
	FBMThreadKey* _threadKey;
	MNIndexedAppMessageSet* _messages;
	MNThreadViewModel* _threadViewModel;
	MNAppMessage* _detailsExpandedMessage;
	MNThreadMontageViewModel* _threadMontageViewModel;
	NSDictionary* _foldableAdminMessageViewStateMap;
	FBMMessageKey* _recentForwardedMontageMessageKey;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                                       //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) BOOL showLoadingIndicator;                                           //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
@property (nonatomic,copy,readonly) MNIndexedAppMessageSet * messages;                              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy,readonly) MNThreadViewModel * threadViewModel;                            //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNAppMessage * detailsExpandedMessage;                          //@synthesize detailsExpandedMessage=_detailsExpandedMessage - In the implementation block
@property (nonatomic,copy,readonly) MNThreadMontageViewModel * threadMontageViewModel;              //@synthesize threadMontageViewModel=_threadMontageViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * foldableAdminMessageViewStateMap;                //@synthesize foldableAdminMessageViewStateMap=_foldableAdminMessageViewStateMap - In the implementation block
@property (nonatomic,readonly) BOOL isTypingActive;                                                 //@synthesize isTypingActive=_isTypingActive - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageKey * recentForwardedMontageMessageKey;               //@synthesize recentForwardedMontageMessageKey=_recentForwardedMontageMessageKey - In the implementation block
-(MNThreadViewModel *)threadViewModel;
-(MNAppMessage *)detailsExpandedMessage;
-(NSDictionary *)foldableAdminMessageViewStateMap;
-(MNThreadMontageViewModel *)threadMontageViewModel;
-(id)initWithThreadKey:(id)arg1 showLoadingIndicator:(BOOL)arg2 messages:(id)arg3 threadViewModel:(id)arg4 detailsExpandedMessage:(id)arg5 threadMontageViewModel:(id)arg6 foldableAdminMessageViewStateMap:(id)arg7 isTypingActive:(BOOL)arg8 recentForwardedMontageMessageKey:(id)arg9 ;
-(BOOL)isTypingActive;
-(FBMMessageKey *)recentForwardedMontageMessageKey;
-(BOOL)showLoadingIndicator;
-(FBMThreadKey *)threadKey;
-(MNIndexedAppMessageSet *)messages;
@end
