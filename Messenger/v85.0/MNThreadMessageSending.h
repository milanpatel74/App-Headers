/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadMessageSending <NSObject>
@property (assign,nonatomic,__weak) id<MNThreadMessageSendingDelegate> delegate; 
@required
-(id)sendMessageToNewThreadWithPickedContacts:(id)arg1 forwardContent:(id)arg2 sendConversionContext:(id)arg3;
-(void)setDelegate:(id)arg1;
-(id<MNThreadMessageSendingDelegate>)delegate;

@end

