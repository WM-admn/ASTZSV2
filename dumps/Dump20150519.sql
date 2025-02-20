-- MySQL dump 10.13  Distrib 5.6.17, for Win32 (x86)
--
-- Host: 127.0.0.1    Database: astzs_db
-- ------------------------------------------------------
-- Server version	5.6.23-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `category`
--

DROP TABLE IF EXISTS `category`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `category` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `category name` varchar(45) NOT NULL,
  UNIQUE KEY `category name_UNIQUE` (`category name`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=32 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `category`
--

LOCK TABLES `category` WRITE;
/*!40000 ALTER TABLE `category` DISABLE KEYS */;
INSERT INTO `category` VALUES (31,'тестовый');
/*!40000 ALTER TABLE `category` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`category_BEFORE_UPDATE` BEFORE UPDATE ON `category` FOR EACH ROW
        begin
SET SQL_SAFE_UPDATES = 0;

UPDATE `astzs_db`.`section` SET `category`=`NEW`.`category name` WHERE `category`=`OLD`.`category name`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`category_AFTER_UPDATE` AFTER UPDATE ON `category` FOR EACH ROW
           begin
SET SQL_SAFE_UPDATES = 0;

UPDATE `astzs_db`.`test` SET `category`=`NEW`.`category name` WHERE `category`=`OLD`.`category name`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`category_BEFORE_DELETE` BEFORE DELETE ON `category` FOR EACH ROW
    begin
SET SQL_SAFE_UPDATES = 0;

DELETE FROM `astzs_db`.`section` WHERE `category`=`OLD`.`category name`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`category_AFTER_DELETE` AFTER DELETE ON `category` FOR EACH ROW
        begin
SET SQL_SAFE_UPDATES = 0;

DELETE FROM `astzs_db`.`test` WHERE `category`=`OLD`.`category name`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `group`
--

DROP TABLE IF EXISTS `group`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `group` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  UNIQUE KEY `name_UNIQUE` (`name`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=13 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `group`
--

LOCK TABLES `group` WRITE;
/*!40000 ALTER TABLE `group` DISABLE KEYS */;
INSERT INTO `group` VALUES (11,'группа 1'),(12,'группа 2');
/*!40000 ALTER TABLE `group` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`group_BEFORE_UPDATE` BEFORE UPDATE ON `group` FOR EACH ROW
       begin
SET SQL_SAFE_UPDATES = 0;

UPDATE `astzs_db`.`users` SET `group`=`NEW`.`name` WHERE `group`=`OLD`.`name`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `question`
--

DROP TABLE IF EXISTS `question`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `question` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `image` int(11) NOT NULL,
  `selectimg` int(11) NOT NULL,
  `corans` int(11) NOT NULL,
  `numofques` int(11) NOT NULL,
  `sectionid` int(11) NOT NULL,
  `question` varchar(255) NOT NULL,
  `imagelocation1` varchar(255) CHARACTER SET utf32 COLLATE utf32_unicode_ci NOT NULL,
  `imagelocation2` varchar(255) NOT NULL,
  `imagelocation3` varchar(255) NOT NULL,
  `imagelocation4` varchar(255) NOT NULL,
  `answer1` varchar(255) NOT NULL,
  `answer2` varchar(255) NOT NULL,
  `answer3` varchar(255) NOT NULL,
  `answer4` varchar(255) NOT NULL,
  `answer5` varchar(255) NOT NULL,
  `answer6` varchar(255) NOT NULL,
  `answer7` varchar(255) NOT NULL,
  `answer8` varchar(255) NOT NULL,
  `category` varchar(45) NOT NULL,
  UNIQUE KEY `question_UNIQUE` (`question`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=26 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `question`
--

LOCK TABLES `question` WRITE;
/*!40000 ALTER TABLE `question` DISABLE KEYS */;
INSERT INTO `question` VALUES (23,2,1,1,2,285,'ответ картинкой, 2 варианта ответа - 1 верный','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 391.jpg','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 119.jpg','0','0','0','0','0','0','0','0','0','0','тестовый'),(24,3,1,2,3,285,'ответ картинкой, 3 варианта ответа - 2 верных','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 391.jpg','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 119.jpg','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 1576.jpg','0','0','0','0','0','0','0','0','0','тестовый'),(25,4,1,1,4,285,'ответ картинкой, 4 варианта ответа - 1 верный','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 391.jpg','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 119.jpg','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 1576.jpg','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 1470.jpg','0','0','0','0','0','0','0','0','тестовый'),(21,1,0,1,4,286,'текстовый с картинкой, 4 варианта ответа, 1 верный','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 391.jpg','0','0','0','1 верный ответ','2 ложный ответ','3 ложный ответ','4 ложный ответ','0','0','0','0','тестовый'),(22,1,0,1,6,286,'текстовый с картинкой, 6 вариантов ответа, 1 верный','C:\\Users\\WM_admin\\Desktop\\test\\Abstract,Vectors,DigitalArt 391.jpg','0','0','0','1 верный ответ','2 ложный ответ','3 ложный ответ','4 ложный ответ','5 ложный ответ','6 ложный ответ','0','0','тестовый'),(16,0,0,2,4,287,'текстовый, 4 варианта ответа, 2 верных','0','0','0','0','1 верный ответ ','2 верный ответ','3 ложный ответ','4 ложный ответ','0','0','0','0','тестовый'),(17,0,0,2,6,287,'текстовый, 6 вариантов ответа, 2 верных','0','0','0','0','1 верный ответ ','2 верный ответ','3 ложный ответ','4 ложный ответ','5 ложный ответ','6 ложный ответ','0','0','тестовый'),(18,0,0,3,8,287,'текстовый, 8 вариантов ответа, 3 верных','0','0','0','0','1 верный ответ ','2 верный ответ','3 верный ответ','4 ложный ответ','5 ложный ответ','6 ложный ответ','7 ложный ответ','8 ложный ответ','тестовый');
/*!40000 ALTER TABLE `question` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `results`
--

DROP TABLE IF EXISTS `results`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `results` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `test_id` int(11) NOT NULL,
  `user_id` int(11) NOT NULL,
  `attempts` int(11) NOT NULL,
  `last name` varchar(45) NOT NULL,
  `group` varchar(45) NOT NULL,
  `Mode of study` varchar(45) NOT NULL,
  `kurse` varchar(45) NOT NULL,
  `category` varchar(45) NOT NULL,
  `test name` varchar(45) NOT NULL,
  `valuation` int(11) NOT NULL,
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `results`
--

LOCK TABLES `results` WRITE;
/*!40000 ALTER TABLE `results` DISABLE KEYS */;
INSERT INTO `results` VALUES (2,5,33,1,'фамилия 2','группа 2','очное','1','тестовый','по всем вопросам',4),(3,6,33,1,'фамилия 2','группа 2','очное','1','тестовый','ответы картинками',5),(4,5,32,1,'фамилия 1','группа 1','очное','1','тестовый','по всем вопросам',2);
/*!40000 ALTER TABLE `results` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `section`
--

DROP TABLE IF EXISTS `section`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `section` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) NOT NULL,
  `category` varchar(45) NOT NULL,
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=288 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `section`
--

LOCK TABLES `section` WRITE;
/*!40000 ALTER TABLE `section` DISABLE KEYS */;
INSERT INTO `section` VALUES (285,'ответ картинкой','тестовый'),(286,'текстовый с картинкой','тестовый'),(287,'текстовый','тестовый');
/*!40000 ALTER TABLE `section` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`section_BEFORE_UPDATE` BEFORE UPDATE ON `section` FOR EACH ROW
    begin
DECLARE idsection INTEGER(11);
SET SQL_SAFE_UPDATES = 0;
set idsection:=0;
SET idsection:=(SELECT `id`  from `astzs_db`.`section` WHERE `name`=`NEW`.`name` && `category`=`NEW`.`category`);

IF idsection<>0 THEN
UPDATE `astzs_db`.`question` SET `sectionid`=idsection,`category`=`NEW`.`category` where `category`=`OLD`.`category` && `sectionid`=`OLD`.`ID`;
else
UPDATE `astzs_db`.`question` SET `category`=`NEW`.`category` where `category`=`OLD`.`category` && `sectionid`=`OLD`.`ID`;
END IF;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`section_BEFORE_DELETE` BEFORE DELETE ON `section` FOR EACH ROW
    begin
SET SQL_SAFE_UPDATES = 0;

DELETE FROM `astzs_db`.`question` WHERE `sectionid`=`OLD`.`id`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `test`
--

DROP TABLE IF EXISTS `test`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `test` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `time` int(11) NOT NULL,
  `Z/O` int(11) NOT NULL,
  `3` int(11) NOT NULL,
  `4` int(11) NOT NULL,
  `5` int(11) NOT NULL,
  `nqestion` int(11) NOT NULL,
  `name` varchar(45) NOT NULL,
  `category` varchar(45) NOT NULL,
  `sectionids` varchar(255) NOT NULL,
  `attempts` int(11) NOT NULL,
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `test`
--

LOCK TABLES `test` WRITE;
/*!40000 ALTER TABLE `test` DISABLE KEYS */;
INSERT INTO `test` VALUES (5,4,1,3,5,8,8,'по всем вопросам','тестовый','285 286 287',10),(6,4,1,1,2,3,3,'ответы картинками','тестовый','285',10),(7,4,0,2,0,0,2,'текстовые с картинками','тестовый','286',10),(8,4,1,1,2,3,3,'текстовые ','тестовый','287',10);
/*!40000 ALTER TABLE `test` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`test_AFTER_UPDATE` AFTER UPDATE ON `test` FOR EACH ROW
      begin
SET SQL_SAFE_UPDATES = 0;

UPDATE `astzs_db`.`results` SET `category`=`NEW`.`category`, `test name`=`NEW`.`name` WHERE `test_id`=`NEW`.`id`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`test_BEFORE_DELETE` BEFORE DELETE ON `test` FOR EACH ROW
        begin
SET SQL_SAFE_UPDATES = 0;

delete from `astzs_db`.`results` WHERE `test_id`=`OLD`.`id`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `users`
--

DROP TABLE IF EXISTS `users`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `users` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `use` int(1) NOT NULL,
  `course` int(1) NOT NULL,
  `nsc` int(11) NOT NULL,
  `first name` varchar(45) NOT NULL,
  `last name` varchar(45) NOT NULL,
  `patronymic` varchar(45) NOT NULL,
  `group` varchar(45) NOT NULL,
  `Mode of study` varchar(45) NOT NULL,
  UNIQUE KEY `nsc_UNIQUE` (`nsc`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=34 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `users`
--

LOCK TABLES `users` WRITE;
/*!40000 ALTER TABLE `users` DISABLE KEYS */;
INSERT INTO `users` VALUES (32,0,1,1,'имя 1','фамилия 1','отчество 1','группа 1','очное'),(33,0,1,2,'имя 2','фамилия 2','отчество 2','группа 2','очное');
/*!40000 ALTER TABLE `users` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`users_BEFORE_UPDATE` BEFORE UPDATE ON `users` FOR EACH ROW
     begin
SET SQL_SAFE_UPDATES = 0;

UPDATE `astzs_db`.`results` SET `last name`=`NEW`.`last name`, `group`=`NEW`.`group`, `Mode of study`=`NEW`.`Mode of study`, `kurse`=`NEW`.`course` WHERE `user_id`=`NEW`.`ID`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `astzs_db`.`users_BEFORE_DELETE` BEFORE DELETE ON `users` FOR EACH ROW
     begin
SET SQL_SAFE_UPDATES = 0;

delete from `astzs_db`.`results` WHERE `user_id`=`OLD`.`ID`;

end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Dumping events for database 'astzs_db'
--

--
-- Dumping routines for database 'astzs_db'
--
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2015-05-19  8:40:17
