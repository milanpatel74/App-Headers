/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BFExecutor : NSObject {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
+(id)mainThreadExecutor;
+(id)executorWithDispatchQueue:(id)arg1 ;
+(id)executorWithBlock:(/*^block*/id)arg1 ;
+(id)defaultExecutor;
+(id)immediateExecutor;
+(id)executorWithOperationQueue:(id)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
