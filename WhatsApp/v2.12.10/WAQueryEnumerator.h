/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMetadataQuery;

@interface WAQueryEnumerator : NSEnumerator {

	BOOL _ignoreDirectories;
	NSMetadataQuery* _query;
	unsigned long long _count;
	unsigned long long _index;
	/*^block*/id _isDirectory;

}

@property (assign,nonatomic) BOOL ignoreDirectories;                  //@synthesize ignoreDirectories=_ignoreDirectories - In the implementation block
@property (nonatomic,retain) NSMetadataQuery * query;                 //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long index;                //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) id isDirectory;                            //@synthesize isDirectory=_isDirectory - In the implementation block
-(BOOL)ignoreDirectories;
-(void)setIgnoreDirectories:(BOOL)arg1 ;
-(id)isDirectory;
-(id)initWithQuery:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(NSMetadataQuery *)query;
-(id)nextObject;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setIsDirectory:(id)arg1 ;
@end

