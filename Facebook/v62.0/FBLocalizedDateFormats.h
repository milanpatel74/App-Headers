/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject, NSLocale, NSArray, NSString, NSDictionary;

@interface FBLocalizedDateFormats : NSObject {

	NSObject*<OS_dispatch_group> _formatsInitializingGroup;
	NSLocale* _overrideLocale;
	NSArray* _templates;
	NSString* _cacheKey;
	NSDictionary* _formats;

}

@property (retain) NSDictionary * formats;              //@synthesize formats=_formats - In the implementation block
-(id)formatForTemplate:(id)arg1 ;
-(id)initWithTemplates:(id)arg1 overrideLocale:(id)arg2 ;
-(void)_onCalendarChanged:(id)arg1 ;
-(void)_updateFormatsIfNeeded;
-(void)_initializeFormats;
-(void)_updateFormatsOnBackgroundThreadIfNeeded;
-(void)_rebuildFormatTemplates;
-(void)setFormats:(NSDictionary *)arg1 ;
-(void)dealloc;
-(NSDictionary *)formats;
@end
