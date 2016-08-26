/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNSettingsSection : FBValueObject <NSCopying> {

	NSString* _identifier;
	NSString* _footerText;
	NSArray* _settingsItems;
	NSArray* _settingsItemCallbacks;
	NSArray* _linkRanges;

}

@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * footerText;                        //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * settingsItems;                      //@synthesize settingsItems=_settingsItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * settingsItemCallbacks;              //@synthesize settingsItemCallbacks=_settingsItemCallbacks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkRanges;                         //@synthesize linkRanges=_linkRanges - In the implementation block
-(NSArray *)settingsItems;
-(NSArray *)settingsItemCallbacks;
-(id)initWithIdentifier:(id)arg1 footerText:(id)arg2 settingsItems:(id)arg3 settingsItemCallbacks:(id)arg4 linkRanges:(id)arg5 ;
-(NSArray *)linkRanges;
-(NSString *)identifier;
-(NSString *)footerText;
@end
