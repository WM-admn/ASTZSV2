CREATE DATABASE  IF NOT EXISTS `astzs_db` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `astzs_db`;
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
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2015-05-19 10:06:51
