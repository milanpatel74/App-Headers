/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WASynchronousBackupOperation.h>

@class NSString;

@interface WAMoveOperation : WASynchronousBackupOperation {

	BOOL _succeeded;
	NSString* _source;
	NSString* _destination;

}

@property (nonatomic,readonly) NSString * source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * destination;              //@synthesize destination=_destination - In the implementation block
-(id)initWithSource:(id)arg1 andDestination:(id)arg2 ;
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(NSString *)source;
-(void)run;
-(NSString *)destination;
-(BOOL)succeeded;
@end
