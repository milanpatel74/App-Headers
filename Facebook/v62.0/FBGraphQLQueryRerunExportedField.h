/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBGraphQLQueryRerunExportedField : NSObject {

	NSString* _exportedFieldName;
	long long _maxReruns;

}

@property (nonatomic,copy,readonly) NSString * exportedFieldName;              //@synthesize exportedFieldName=_exportedFieldName - In the implementation block
@property (nonatomic,readonly) long long maxReruns;                            //@synthesize maxReruns=_maxReruns - In the implementation block
-(id)initWithExportedFieldName:(id)arg1 maxReruns:(long long)arg2 ;
-(NSString *)exportedFieldName;
-(long long)maxReruns;
-(id)init;
@end
