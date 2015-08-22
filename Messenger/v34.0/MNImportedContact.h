/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, NSArray;

@interface MNImportedContact : FBValueObject <NSCopying> {

	NSString* _identifier;
	NSString* _writeIdentifier;
	NSArray* _phoneNumbers;

}

@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * writeIdentifier;              //@synthesize writeIdentifier=_writeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * phoneNumbers;                  //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
-(NSString *)writeIdentifier;
-(id)initWithIdentifier:(id)arg1 writeIdentifier:(id)arg2 phoneNumbers:(id)arg3 ;
-(NSString *)identifier;
-(NSArray *)phoneNumbers;
@end
