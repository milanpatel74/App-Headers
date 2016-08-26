/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAddressBookAccessRequestDelegate.h>
#import <Facebook/FBAddressBookReaderDelegate.h>
#import <Facebook/FBAddressBookAccessRequester.h>
#import <Facebook/FBAddressBookReader.h>
#import <Facebook/FBAddressBookAccessPermissionChecker.h>

@protocol OS_dispatch_queue, FBAddressBookAccessRequestDelegate, FBAddressBookReaderDelegate;
@class FBSystemAddressBookAccessRequester, NSObject, FBSystemAddressBookReader, NSString;

@interface FBSystemAddressBook : NSObject <FBAddressBookAccessRequestDelegate, FBAddressBookReaderDelegate, FBAddressBookAccessRequester, FBAddressBookReader, FBAddressBookAccessPermissionChecker> {

	FBSystemAddressBookAccessRequester* _accessRequester;
	NSObject*<OS_dispatch_queue> _queueToDispatchEventsOnto;
	FBSystemAddressBookReader* _reader;
	id<FBAddressBookAccessRequestDelegate> _accessRequestDelegate;
	id<FBAddressBookReaderDelegate> _readerDelegate;

}

@property (assign,nonatomic,__weak) id<FBAddressBookAccessRequestDelegate> accessRequestDelegate;              //@synthesize accessRequestDelegate=_accessRequestDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBAddressBookReaderDelegate> readerDelegate;                            //@synthesize readerDelegate=_readerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readAddressBook;
-(void)didReadAddressBookWithContacts:(id)arg1 ;
-(id)initWithQueueOntoWhichEventsAreDispatched:(id)arg1 ;
-(void)setReaderDelegate:(id<FBAddressBookReaderDelegate>)arg1 ;
-(unsigned long long)addressBookAccessPermission;
-(id<FBAddressBookAccessRequestDelegate>)accessRequestDelegate;
-(void)setAccessRequestDelegate:(id<FBAddressBookAccessRequestDelegate>)arg1 ;
-(id<FBAddressBookReaderDelegate>)readerDelegate;
-(void)accessToAddressBookGranted;
-(void)accessToAddressBookDenied;
-(void)requestAccessToAddressBook;
@end
