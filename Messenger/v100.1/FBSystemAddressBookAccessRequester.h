/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAddressBookAccessRequester.h>

@protocol FBAddressBookAccessRequestDelegate;
@class NSString;

@interface FBSystemAddressBookAccessRequester : NSObject <FBAddressBookAccessRequester> {

	void* _addressBook;
	id<FBAddressBookAccessRequestDelegate> _delegate;
	void* _addressbook;

}

@property (assign,nonatomic,__weak) id<FBAddressBookAccessRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* addressbook;                                                   //@synthesize addressbook=_addressbook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestAccessToAddressBook;
-(void)setAddressbook:(void*)arg1 ;
-(void)displaySystemAlert;
-(void*)addressbook;
-(void)setDelegate:(id<FBAddressBookAccessRequestDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAddressBookAccessRequestDelegate>)delegate;
@end

