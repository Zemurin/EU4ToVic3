import Dependencies._

lazy val `E5-Con` = (project
  settings(Default.scalaSettings)
  settings(
    libraryDependencies ++= Seq(
      pgscala,
      logback,
      scalaTest % Test, 
    )
  )
)

lazy val DoiReg = (project
  settings(Default.scalaSettings)
  settings(
    libraryDependencies ++= Seq(
      liftJson,
      liftCommon,
      liftUtil,
      dispatchHttp,
      dispatchTagsoup,
      dispacherMime,
      httpClientDep,
      scalaio,
      apacheCommons,
      scalaTest % Test,
    )
  )
) dependsOn(`E5-Con`)

lazy val MailReader = (project
  settings(Default.scalaSettings)
  settings(
  libraryDependencies ++= Seq(
      javaMail,
      scalaio,
      dispatchHttp,
      logback,
      pgscala,
      scalaTest % Test,
    )
  )
)
