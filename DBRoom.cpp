#include "DBRoom.h"

namespace DBEntity {

	DBRoom::DBRoom(qint32 id_, QString name_, QString description_, qint32 topic_id_, bool is_private_, QString password_, bool is_deleted_) : a_id(id_), a_name(name_), a_description(description_), a_topic_id(topic_id_), a_is_private(is_private_), a_password(password_), a_is_deleted(is_deleted_) {};

	qint32 DBRoom::getId() const { return this->a_id; }
	void DBRoom::setId(const qint32& id_) { this->a_id = id_; }

	QString DBRoom::getName() const { return this->a_name; }
	void DBRoom::setName(const QString& name_) { this->a_name = name_; }

	QString DBRoom::getDescription() const { return this->a_description; }
	void DBRoom::setDescription(const QString& description_) { this->a_description = description_; }

	qint32 DBRoom::getTopicId() const { return this->a_topic_id; }
	void DBRoom::setTopicId(const qint32& topic_id_) { this->a_topic_id = topic_id_; }

	bool DBRoom::isPrivate() const { return this->a_is_private; }
	void DBRoom::setIsPrivate(const bool& is_private_) { this->a_is_private = is_private_; }

	QString DBRoom::getPassword() const { return this->a_password; }
	void DBRoom::setPassword(const QString& password_) { this->a_password = password_; }

	bool DBRoom::isDeleted() const { return this->a_is_deleted; }
	void DBRoom::setIsDeleted(const bool& deleted_) { this->a_is_deleted = deleted_; }
}
