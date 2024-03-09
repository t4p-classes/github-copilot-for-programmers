# Use Copilot Terminal Chat to Learn Containerization

## Example Prompts

1. Getting Started with Containerization

```text
@terminal I am new to containerization. Please explain to me the basics of containerization. What tools can I use? Which tool do you recommend?
```

2. Getting Started with Docker

```text
@terminal How do I get started with Docker? Is there such a thing a "Hello, World!" with the Docker technology?
```

3. Create a Docker Image for a SpringBoot Application

```text
@terminal I am a Java SpringBoot programmer. My manager has told me that I need to deploy my latest SpringBoot application to the cloud using a Docker image. Can you explain to me how to create a Docker image for a standard SpringBoot application?
```

4. Use Docker to Build the Application, and Create the Deploy Image

```text
@terminal This is great! Thank you! One more thing, my manager said I need to use Docker to build and deploy the application. He mentioned something about a multi-stage Dockerfile which contains a build container or image, and then copies the built JAR file to the image used for deployment. Can you help me with this?
```

5. Deploy the Docker Image to a Container Registry within AWS

```text
@terminal Finally, how do I push my final image to a container registry on AWS?
```

6. Access the Containers running on Kubernetes.

```text
@terminal The ops team told me that my image was deployed within a Kubernetes cluster. What is Kubernetes? Also, they said I can view my running application with some kind of command line tool. Which command line tool is used to administer Kubernetes? How do I access the cluster with it? Kubernetes is running on AWS.
```

7. What are Kubernetes Pods?

```test
@terminal Explain to me what Kubernetes pods are. How do I view their health?
```

8. Deploy my SpringBoot App to Kubernetes

```text
@terminal The ops team told me they have setup a Kubernetes cluster for testing and development. I need to deploy my SpringBoot Application from the Container Registry to this new cluster. Also, my application needs a connection string environment variable so the application can connect to the data when running in the cluster. How do I securely store the connection string in AWS and make it available an environment variable on my running pods?
```

9. Kubectl to Perform Deployment

```text
@terminal Thanks! This looks great. One last thing, how do I deploy this with kubectl?
```