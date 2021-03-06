/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNContactSearchStandardSourcesConfiguration : FBValueObject <NSCopying> {

	BOOL _includeUsers;
	BOOL _includeGroups;
	BOOL _includePages;
	BOOL _includeVCEndpoints;
	BOOL _includeInternalBots;
	BOOL _includeSecureThreads;
	BOOL _includeAddressBookEntries;
	BOOL _includeNetworkResults;

}

@property (nonatomic,readonly) BOOL includeUsers;                           //@synthesize includeUsers=_includeUsers - In the implementation block
@property (nonatomic,readonly) BOOL includeGroups;                          //@synthesize includeGroups=_includeGroups - In the implementation block
@property (nonatomic,readonly) BOOL includePages;                           //@synthesize includePages=_includePages - In the implementation block
@property (nonatomic,readonly) BOOL includeVCEndpoints;                     //@synthesize includeVCEndpoints=_includeVCEndpoints - In the implementation block
@property (nonatomic,readonly) BOOL includeInternalBots;                    //@synthesize includeInternalBots=_includeInternalBots - In the implementation block
@property (nonatomic,readonly) BOOL includeSecureThreads;                   //@synthesize includeSecureThreads=_includeSecureThreads - In the implementation block
@property (nonatomic,readonly) BOOL includeAddressBookEntries;              //@synthesize includeAddressBookEntries=_includeAddressBookEntries - In the implementation block
@property (nonatomic,readonly) BOOL includeNetworkResults;                  //@synthesize includeNetworkResults=_includeNetworkResults - In the implementation block
-(id)initWithIncludeUsers:(BOOL)arg1 includeGroups:(BOOL)arg2 includePages:(BOOL)arg3 includeVCEndpoints:(BOOL)arg4 includeInternalBots:(BOOL)arg5 includeSecureThreads:(BOOL)arg6 includeAddressBookEntries:(BOOL)arg7 includeNetworkResults:(BOOL)arg8 ;
-(BOOL)includeUsers;
-(BOOL)includeGroups;
-(BOOL)includePages;
-(BOOL)includeVCEndpoints;
-(BOOL)includeInternalBots;
-(BOOL)includeSecureThreads;
-(BOOL)includeAddressBookEntries;
-(BOOL)includeNetworkResults;
@end

