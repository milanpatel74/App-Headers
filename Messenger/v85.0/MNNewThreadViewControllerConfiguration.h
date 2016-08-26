/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNNewThreadViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _disableSuggestions;
	BOOL _initialFlowersBorderModeEnabled;
	NSArray* _pickedContacts;
	NSArray* _hoistedUserIds;
	NSString* _initialComposerExtensionIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * pickedContacts;                                   //@synthesize pickedContacts=_pickedContacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hoistedUserIds;                                   //@synthesize hoistedUserIds=_hoistedUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialComposerExtensionIdentifier;              //@synthesize initialComposerExtensionIdentifier=_initialComposerExtensionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL disableSuggestions;                                         //@synthesize disableSuggestions=_disableSuggestions - In the implementation block
@property (nonatomic,readonly) BOOL initialFlowersBorderModeEnabled;                            //@synthesize initialFlowersBorderModeEnabled=_initialFlowersBorderModeEnabled - In the implementation block
-(NSArray *)pickedContacts;
-(BOOL)initialFlowersBorderModeEnabled;
-(NSString *)initialComposerExtensionIdentifier;
-(id)initWithPickedContacts:(id)arg1 hoistedUserIds:(id)arg2 initialComposerExtensionIdentifier:(id)arg3 disableSuggestions:(BOOL)arg4 initialFlowersBorderModeEnabled:(BOOL)arg5 ;
-(NSArray *)hoistedUserIds;
-(BOOL)disableSuggestions;
@end
