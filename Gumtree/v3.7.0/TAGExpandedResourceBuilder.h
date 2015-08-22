/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface TAGExpandedResourceBuilder : NSObject {

	int _resourceFormatVersion;
	NSString* _version;
	NSMutableArray* _rules;
	NSMutableDictionary* _macros;

}

@property (nonatomic,copy) NSString * version;                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) int resourceFormatVersion;                 //@synthesize resourceFormatVersion=_resourceFormatVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * rules;                    //@synthesize rules=_rules - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * macros;              //@synthesize macros=_macros - In the implementation block
-(int)resourceFormatVersion;
-(void)setResourceFormatVersion:(int)arg1 ;
-(NSMutableDictionary *)macros;
-(void)addMacro:(id)arg1 ;
-(void)setMacros:(NSMutableDictionary *)arg1 ;
-(id)build;
-(id)init;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)addRule:(id)arg1 ;
-(NSMutableArray *)rules;
-(void)setRules:(NSMutableArray *)arg1 ;
@end
