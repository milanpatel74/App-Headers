/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBGraphQLConnectionLocationInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBGraphQLConnectionCursor;

@interface FBGraphQLConnectionStoreLocation : FBValueObject <FBGraphQLConnectionLocationInterface, NSCopying> {

	BOOL _hasAnotherPage;
	BOOL _isLoading;
	NSString* _cursor;
	unsigned long long _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBGraphQLConnectionCursor * connectionCursor; 
@property (nonatomic,readonly) BOOL hasAnotherPage; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (nonatomic,copy,readonly) NSString * cursor;                                    //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) BOOL hasAnotherPage;                                       //@synthesize hasAnotherPage=_hasAnotherPage - In the implementation block
@property (nonatomic,readonly) BOOL isLoading;                                            //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
-(FBGraphQLConnectionCursor *)connectionCursor;
-(BOOL)hasAnotherPage;
-(id)initWithCursor:(id)arg1 hasAnotherPage:(BOOL)arg2 isLoading:(BOOL)arg3 type:(unsigned long long)arg4 ;
-(unsigned long long)type;
-(BOOL)isLoading;
-(NSString *)cursor;
@end
