/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTQueue, NSMutableDictionary;

@interface TGMemoryImageCache : NSObject {

	MTQueue* _queue;
	unsigned long long _softMemoryLimit;
	unsigned long long _hardMemoryLimit;
	NSMutableDictionary* _cache;
	unsigned long long _cacheSize;
	NSMutableDictionary* _averageColors;

}
-(id)signalForKey:(id)arg1 ;
-(id)imageSignalForKey:(id)arg1 ;
-(id)initWithSoftMemoryLimit:(unsigned long long)arg1 hardMemoryLimit:(unsigned long long)arg2 ;
-(id)imageForKey:(id)arg1 attributes:(id*)arg2 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 attributes:(id)arg3 ;
-(void)_addSize:(unsigned long long)arg1 ;
-(void)setAverageColor:(unsigned)arg1 forKey:(id)arg2 ;
-(BOOL)averageColorForKey:(id)arg1 color:(unsigned*)arg2 ;
@end
