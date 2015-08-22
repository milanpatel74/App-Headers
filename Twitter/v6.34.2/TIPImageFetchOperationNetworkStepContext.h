/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TIPPartialImage, NSString, TIPImageDiskCacheTemporaryFile, TNLRequestOperation;

@interface TIPImageFetchOperationNetworkStepContext : NSObject {

	TIPPartialImage* _partialImage;
	NSString* _lastModified;
	TIPImageDiskCacheTemporaryFile* _tempFile;
	TNLRequestOperation* _operation;

}

@property (retain) TIPPartialImage * partialImage;                         //@synthesize partialImage=_partialImage - In the implementation block
@property (copy) NSString * lastModified;                                  //@synthesize lastModified=_lastModified - In the implementation block
@property (retain) TIPImageDiskCacheTemporaryFile * tempFile;              //@synthesize tempFile=_tempFile - In the implementation block
@property (nonatomic,retain) TNLRequestOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(TIPPartialImage *)partialImage;
-(void)setPartialImage:(TIPPartialImage *)arg1 ;
-(TIPImageDiskCacheTemporaryFile *)tempFile;
-(void)setTempFile:(TIPImageDiskCacheTemporaryFile *)arg1 ;
-(void)setLastModified:(NSString *)arg1 ;
-(TNLRequestOperation *)operation;
-(void)setOperation:(TNLRequestOperation *)arg1 ;
-(NSString *)lastModified;
@end
