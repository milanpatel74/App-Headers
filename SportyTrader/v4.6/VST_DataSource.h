/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/CodecUnitDataSource.h>

@interface VST_DataSource : NSObject <CodecUnitDataSource> {

	/*function pointer*/void* audioCallback;
	BOOL isPcm;

}
-(void)getData:(char*)arg1 length:(long long*)arg2 andIsLastBuf:(BOOL*)arg3 ;
-(id)initWithAudioCallback:(const /*function pointer*/void*)arg1 andIsPcmType:(BOOL)arg2 ;
-(void)dealloc;
@end

