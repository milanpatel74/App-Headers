/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBImageStreamingService <NSObject>
@required
-(void)clearAllImageCache:(/*^block*/id)arg1;
-(id)streamImageWithURL:(id)arg1 desiredImageFlag:(unsigned long long)arg2 imageFlagsToBeNotified:(unsigned long long)arg3 scenePath:(id)arg4 priority:(long long)arg5 callPath:(id)arg6 options:(unsigned long long)arg7 queue:(id)arg8 streamingBlock:(/*^block*/id)arg9;
-(void)cancelStreamingForToken:(id)arg1;
-(void)updateScenePath:(id)arg1 andPriority:(long long)arg2 forToken:(id)arg3;

@end
