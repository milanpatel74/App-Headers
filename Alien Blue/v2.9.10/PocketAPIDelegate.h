/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PocketAPIDelegate <NSObject>
@optional
-(void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2;
-(void)pocketAPILoggedIn:(id)arg1;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
-(void)pocketAPI:(id)arg1 savedURL:(id)arg2;
-(void)pocketAPI:(id)arg1 failedToSaveURL:(id)arg2 error:(id)arg3;
-(void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;
-(void)pocketAPIDidStartLogin:(id)arg1;
-(void)pocketAPIDidFinishLogin:(id)arg1;

@end
