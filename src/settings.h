#pragma once

#include <QSettings>

#include <functional>

class Settings : public QSettings
{
    Q_OBJECT

    public:
        static Settings* instance();
        void setValue(const QString &key, const QVariant &value);
        void enableNotifications(bool on);

    protected:
        explicit Settings(QObject *parent = Q_NULLPTR);
        Settings(const Settings&);

    signals:
        void updated(const QString& key, const QVariant& variant);

    private:
        static Settings *m_instance;
        bool m_notificationsEnabled;
};
