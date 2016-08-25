//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPWSConnectionDelegate.h"

@class NSHTTPURLResponse, NSMutableData, NSString, SKPWSConnection;

@interface SKPWebService : NSObject <SKPWSConnectionDelegate>
{
    id <SKPWebServiceDelegate> _delegate;
    NSMutableData *_data;
    NSHTTPURLResponse *_response;
    SKPWSConnection *_connection;
}

@property(retain, nonatomic) SKPWSConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <SKPWebServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)domainObjectFromData:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1 forRequestWithTag:(long long)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forRequestWithTag:(long long)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 forRequestWithTag:(long long)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2 forRequestWithTag:(long long)arg3;
- (id)prepareRequestWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 contentType:(id)arg4 accept:(id)arg5;
- (id)prepareRequestWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 contentType:(id)arg4;
- (id)prepareRequestWithURL:(id)arg1 method:(id)arg2 body:(id)arg3;
- (id)prepareRequestWithURL:(id)arg1 method:(id)arg2;
- (id)prepareRequestWithURL:(id)arg1;
- (void)performRequestWithTag:(unsigned long long)arg1 request:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
