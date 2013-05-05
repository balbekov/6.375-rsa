import GetPut::*;

typedef 520 BI_SIZE;
typedef Bit#(BI_SIZE) BIG_INT;

// SceMi Types
typedef 8 RSA_PACKET_SIZE;
typedef Bit#(RSA_PACKET_SIZE) RSA_PACKET;
typedef TDiv#(BI_SIZE, 8) PACKET_COUNT;

// Adder types
typedef 2 ADD_STAGES; // MUST BE DIVISIBLE INTO BI_SIZE
typedef TDiv#(BI_SIZE, ADD_STAGES) ADD_WIDTH;

typedef struct {
  BIG_INT a;
  BIG_INT b;
  Bool do_sub;
} AdderOperands deriving (Bits, Eq);


// Memory Types
typedef Bit#(16) Addr;