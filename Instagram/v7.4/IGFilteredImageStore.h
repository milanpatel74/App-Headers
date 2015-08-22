/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface IGFilteredImageStore : NSObject
+(void)clearStore;
+(id)cachedImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(void)imageForImageName:(id)arg1 filterClass:(Class)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)filteredImageForImage:(id)arg1 filterClass:(Class)arg2 ;
+(id)diskStore;
+(id)keyForImageNamed:(id)arg1 filterClass:(Class)arg2 ;
+(BOOL)containsImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(id)cache;
+(void)clearCache;
+(id)queue;
@end
