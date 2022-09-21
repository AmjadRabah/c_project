FROM alpine:latest
RUN mkdir -p /app
COPY build /app
WORKDIR /app
CMD ["/app/bulid"]
