/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Hmac : NSObject
+(id)calculateApiHash:(id)arg1 method:(id)arg2 param:(id)arg3 content:(id)arg4 ;
+(int)computeHash:(id)arg1 theSeed:(int)arg2 ;
+(id)calculateNewApiHash:(id)arg1 method:(id)arg2 param:(id)arg3 content:(id)arg4 ;
+(id)calculateHmac:(id)arg1 withKey:(id)arg2 ;
+(int)computeHash:(id)arg1 seed:(int)arg2 ;
@end
