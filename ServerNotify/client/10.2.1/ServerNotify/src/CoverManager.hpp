/* Copyright (c) 2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef COVERMANAGER_HPP_
#define COVERMANAGER_HPP_

#include <bb/cascades/SceneCover>
#include <bb/cascades/Container>

#include <QFileSystemWatcher>

using namespace bb::cascades;

class CoverManager: public SceneCover  {
	Q_OBJECT
public:
	CoverManager();
	virtual ~CoverManager();
	Q_SLOT void pushListUpdated();

private:
	Container *m_pushMessageCover;
	QFileSystemWatcher* m_fileSystemWatcher;
};

#endif /* COVERMANAGER_HPP_ */
