/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface JKSerializer : NSObject {

	JKEncodeState* encodeState;

}
+(id)serializeObject:(id)arg1 options:(unsigned long long)arg2 encodeOption:(unsigned long long)arg3 block:(/*^block*/id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7 ;
-(id)serializeObject:(id)arg1 options:(unsigned long long)arg2 encodeOption:(unsigned long long)arg3 block:(/*^block*/id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7 ;
-(void)releaseState;
-(void)dealloc;
@end
