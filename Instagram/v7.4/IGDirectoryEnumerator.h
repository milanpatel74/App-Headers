/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSURL, NSArray, NSDictionary;

@interface IGDirectoryEnumerator : NSEnumerator {

	SCD_Struct_IG0* _tree;
	unsigned long long _traversal;
	NSURL* _baseURL;
	NSArray* _properties;
	NSDictionary* _fileAttributes;
	unsigned long long _level;

}

@property (assign,nonatomic) unsigned long long traversal;              //@synthesize traversal=_traversal - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSArray * properties;                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSDictionary * fileAttributes;               //@synthesize fileAttributes=_fileAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long level;                  //@synthesize level=_level - In the implementation block
-(void)setTraversal:(unsigned long long)arg1 ;
-(unsigned long long)traversal;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 traversal:(unsigned long long)arg3 ;
-(void)setFileAttributes:(NSDictionary *)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IG1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(NSURL *)baseURL;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)fileAttributes;
@end
