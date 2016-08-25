/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Prefs : NSObject
+(id)archivesPath;
+(id)pathForArchiveFile:(id)arg1 ;
+(id)contentsOfArchiveFile:(id)arg1 ;
+(id)mutableArrayFromArchiveFile:(id)arg1 ;
+(void)storeArray:(id)arg1 inArchiveFile:(id)arg2 ;
+(id)listInPrefKey:(id)arg1 objectMatching:(/*^block*/id)arg2 ;
+(id)mutableArrayFromPrefKey:(id)arg1 ;
+(void)listInPrefKey:(id)arg1 removeObjectMatching:(/*^block*/id)arg2 ;
+(id)listInPrefKey:(id)arg1 stringMatching:(id)arg2 ;
+(BOOL)listInPrefKey:(id)arg1 containsString:(id)arg2 ;
+(void)listInPrefKey:(id)arg1 appendObject:(id)arg2 limitToMaximum:(unsigned long long)arg3 ;
+(id)listInArchiveFile:(id)arg1 ;
+(void)listInArchiveFile:(id)arg1 appendObject:(id)arg2 limitToMaximum:(unsigned long long)arg3 ;
+(void)listInArchiveFileRemoveAllObjects:(id)arg1 ;
+(void)listInArchiveFile:(id)arg1 removeObjectMatching:(/*^block*/id)arg2 ;
+(id)listInArchiveFile:(id)arg1 objectMatching:(/*^block*/id)arg2 ;
+(unsigned long long)sizeOfListInPrefKey:(id)arg1 ;
+(void)listInPrefKey:(id)arg1 removeString:(id)arg2 ;
+(void)listInPrefKey:(id)arg1 appendUniqueString:(id)arg2 limitToMaximum:(unsigned long long)arg3 ;
+(id)enumInPrefKey:(id)arg1 family:(id)arg2 ;
+(void)setEnumInPrefKey:(id)arg1 enumValue:(long long)arg2 ;
+(void)setEnumInPrefKey:(id)arg1 enumMap:(id)arg2 ;
+(BOOL)isNight;
+(double)appearanceTextSizeMultiplier;
+(void)initializeDefaultsIfNeeded;
+(void)textSizeDidChange;
@end
