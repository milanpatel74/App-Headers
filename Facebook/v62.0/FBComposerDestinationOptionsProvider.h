/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerDestinationOptionsProviderDelegate;
@class FBComposerAuthor, FBComposerPublishTarget, FBUserSession, NSArray, FBComposerDestinationOption, NSString;

@interface FBComposerDestinationOptionsProvider : NSObject <FBComposerCompositionStateChangedListener> {

	FBComposerAuthor* _defaultAuthor;
	FBComposerPublishTarget* _defaultPublishTarget;
	long long _defaultOptionIndex;
	FBUserSession* _userSession;
	NSArray* _options;
	FBComposerDestinationOption* _defaultOption;
	FBComposerAuthor* _authorRepresentingLoggedInUser;
	FBComposerPublishTarget* _publishTargetRepresentingLoggedInUser;
	unsigned long long _destinationChoosingType;
	Class _policy;
	id<FBComposerDestinationOptionsProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerDestinationOptionsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)initForDefaultAuthor:(id)arg1 defaultPublishTarget:(id)arg2 userSession:(id)arg3 destinationChoosingType:(unsigned long long)arg4 ;
-(id)getDefaultAvailableOptions;
-(id)getDefaultSelectedOption;
-(id)retrieveAllOptions:(/*^block*/id)arg1 ;
-(id)optionForAvatar:(id)arg1 ;
-(BOOL)shouldShowTimelineOption;
-(void)_processResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<FBComposerDestinationOptionsProviderDelegate>)arg1 ;
-(id<FBComposerDestinationOptionsProviderDelegate>)delegate;
@end
