MCP: model protocol context
1. Base communication layer: JSON-RPC 2.0 -> RPC stands for Remote Procedure Call.
2. Transport layer (below / alongside it)
JSON-RPC messages can be carried over different transports. MCP is transport-agnostic, but the spec currently standardizes:
stdio (common for local tools and CLIs)
HTTP with Server-Sent Events (SSE) (common for remote servers)
