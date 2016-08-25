/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PURFilterSetting : NSObject {

	Class _filterClass;
	NSString* _tagPattern;
	NSDictionary* _settings;

}

@property (nonatomic,readonly) Class filterClass;                    //@synthesize filterClass=_filterClass - In the implementation block
@property (nonatomic,readonly) NSString * tagPattern;                //@synthesize tagPattern=_tagPattern - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
-(NSString *)tagPattern;
-(id)initWithFilter:(Class)arg1 tagPattern:(id)arg2 settings:(id)arg3 ;
-(id)initWithFilter:(Class)arg1 tagPattern:(id)arg2 ;
-(Class)filterClass;
-(id)init;
-(NSDictionary *)settings;
@end
