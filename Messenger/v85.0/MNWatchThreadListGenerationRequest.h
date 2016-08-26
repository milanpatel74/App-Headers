/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNWatchThreadListGenerationRequest : NSObject <NSCopying> {

	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,copy,readonly) id successBlock;              //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy,readonly) id failureBlock;              //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)successBlock;
-(id)initWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)failureBlock;
@end
