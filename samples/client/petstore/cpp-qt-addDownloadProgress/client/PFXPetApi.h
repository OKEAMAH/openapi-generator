/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef PFX_PFXPetApi_H
#define PFX_PFXPetApi_H

#include "PFXHelpers.h"
#include "PFXHttpRequest.h"
#include "PFXServerConfiguration.h"
#include "PFXOauth.h"

#include "PFXApiResponse.h"
#include "PFXHttpFileElement.h"
#include "PFXPet.h"
#include <QSet>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace test_namespace {

class PFXPetApi : public QObject {
    Q_OBJECT

public:
    PFXPetApi(const int timeOut = 0);
    ~PFXPetApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, PFXServerVariable> &variables = QMap<QString, PFXServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, PFXServerVariable> &variables =  QMap<QString, PFXServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, PFXServerVariable> &variables =  QMap<QString, PFXServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  pfx_pet PFXPet [required]
    */
    void addPet(const PFXPet &pfx_pet);


    void allPets();

    /**
    * @param[in]  pet_id qint64 [required]
    * @param[in]  api_key QString [optional]
    */
    void deletePet(const qint64 &pet_id, const ::test_namespace::OptionalParam<QString> &api_key = ::test_namespace::OptionalParam<QString>());

    /**
    * @param[in]  status QList<QString> [required]
    */
    void findPetsByStatus(const QList<QString> &status);

    /**
    * @param[in]  tags QList<QString> [required]
    */
    Q_DECL_DEPRECATED void findPetsByTags(const QList<QString> &tags);

    /**
    * @param[in]  pet_id qint64 [required]
    */
    void getPetById(const qint64 &pet_id);

    /**
    * @param[in]  pfx_pet PFXPet [required]
    */
    void updatePet(const PFXPet &pfx_pet);

    /**
    * @param[in]  pet_id qint64 [required]
    * @param[in]  name QString [optional]
    * @param[in]  status QString [optional]
    */
    void updatePetWithForm(const qint64 &pet_id, const ::test_namespace::OptionalParam<QString> &name = ::test_namespace::OptionalParam<QString>(), const ::test_namespace::OptionalParam<QString> &status = ::test_namespace::OptionalParam<QString>());

    /**
    * @param[in]  pet_id qint64 [required]
    * @param[in]  additional_metadata QString [optional]
    * @param[in]  file PFXHttpFileElement [optional]
    */
    void uploadFile(const qint64 &pet_id, const ::test_namespace::OptionalParam<QString> &additional_metadata = ::test_namespace::OptionalParam<QString>(), const ::test_namespace::OptionalParam<PFXHttpFileElement> &file = ::test_namespace::OptionalParam<PFXHttpFileElement>());


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<PFXServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    PFXHttpRequestInput _latestInput;
    PFXHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void addPetCallback(PFXHttpRequestWorker *worker);
    void allPetsCallback(PFXHttpRequestWorker *worker);
    void deletePetCallback(PFXHttpRequestWorker *worker);
    void findPetsByStatusCallback(PFXHttpRequestWorker *worker);
    void findPetsByTagsCallback(PFXHttpRequestWorker *worker);
    void getPetByIdCallback(PFXHttpRequestWorker *worker);
    void updatePetCallback(PFXHttpRequestWorker *worker);
    void updatePetWithFormCallback(PFXHttpRequestWorker *worker);
    void uploadFileCallback(PFXHttpRequestWorker *worker);

Q_SIGNALS:

    void addPetSignal();
    void allPetsSignal(QSet<PFXPet> summary);
    void deletePetSignal();
    void findPetsByStatusSignal(QList<PFXPet> summary);
    void findPetsByTagsSignal(QList<PFXPet> summary);
    void getPetByIdSignal(PFXPet summary);
    void updatePetSignal();
    void updatePetWithFormSignal();
    void uploadFileSignal(PFXApiResponse summary);

    void addPetProgress(qint64 bytesReceived, qint64 bytesTotal);
    void allPetsProgress(qint64 bytesReceived, qint64 bytesTotal);
    void deletePetProgress(qint64 bytesReceived, qint64 bytesTotal);
    void findPetsByStatusProgress(qint64 bytesReceived, qint64 bytesTotal);
    void findPetsByTagsProgress(qint64 bytesReceived, qint64 bytesTotal);
    void getPetByIdProgress(qint64 bytesReceived, qint64 bytesTotal);
    void updatePetProgress(qint64 bytesReceived, qint64 bytesTotal);
    void updatePetWithFormProgress(qint64 bytesReceived, qint64 bytesTotal);
    void uploadFileProgress(qint64 bytesReceived, qint64 bytesTotal);

    void addPetSignalFull(PFXHttpRequestWorker *worker);
    void allPetsSignalFull(PFXHttpRequestWorker *worker, QSet<PFXPet> summary);
    void deletePetSignalFull(PFXHttpRequestWorker *worker);
    void findPetsByStatusSignalFull(PFXHttpRequestWorker *worker, QList<PFXPet> summary);
    void findPetsByTagsSignalFull(PFXHttpRequestWorker *worker, QList<PFXPet> summary);
    void getPetByIdSignalFull(PFXHttpRequestWorker *worker, PFXPet summary);
    void updatePetSignalFull(PFXHttpRequestWorker *worker);
    void updatePetWithFormSignalFull(PFXHttpRequestWorker *worker);
    void uploadFileSignalFull(PFXHttpRequestWorker *worker, PFXApiResponse summary);

    Q_DECL_DEPRECATED_X("Use addPetSignalError() instead")
    void addPetSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void addPetSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use allPetsSignalError() instead")
    void allPetsSignalE(QSet<PFXPet> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void allPetsSignalError(QSet<PFXPet> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deletePetSignalError() instead")
    void deletePetSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deletePetSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use findPetsByStatusSignalError() instead")
    void findPetsByStatusSignalE(QList<PFXPet> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void findPetsByStatusSignalError(QList<PFXPet> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use findPetsByTagsSignalError() instead")
    void findPetsByTagsSignalE(QList<PFXPet> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void findPetsByTagsSignalError(QList<PFXPet> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getPetByIdSignalError() instead")
    void getPetByIdSignalE(PFXPet summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPetByIdSignalError(PFXPet summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updatePetSignalError() instead")
    void updatePetSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void updatePetSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updatePetWithFormSignalError() instead")
    void updatePetWithFormSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void updatePetWithFormSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use uploadFileSignalError() instead")
    void uploadFileSignalE(PFXApiResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void uploadFileSignalError(PFXApiResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use addPetSignalErrorFull() instead")
    void addPetSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addPetSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use allPetsSignalErrorFull() instead")
    void allPetsSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void allPetsSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deletePetSignalErrorFull() instead")
    void deletePetSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deletePetSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use findPetsByStatusSignalErrorFull() instead")
    void findPetsByStatusSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void findPetsByStatusSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use findPetsByTagsSignalErrorFull() instead")
    void findPetsByTagsSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void findPetsByTagsSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getPetByIdSignalErrorFull() instead")
    void getPetByIdSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPetByIdSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updatePetSignalErrorFull() instead")
    void updatePetSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updatePetSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updatePetWithFormSignalErrorFull() instead")
    void updatePetWithFormSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updatePetWithFormSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use uploadFileSignalErrorFull() instead")
    void uploadFileSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void uploadFileSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace test_namespace
#endif
