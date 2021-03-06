/**
 * @generated by contrib/devtools/chainparams/generate_chainparams_constants.py
 */

#include <chainparamsconstants.h>

namespace ChainParamsConstants {
    const BlockHash MAINNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000000000000086f5ea3761b231a98755c201af006528b1aab97d1a2feb67");
    const uint256 MAINNET_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000153d03f877c448f74924a6c");
    const uint64_t MAINNET_ASSUMED_BLOCKCHAIN_SIZE = 210;
    const uint64_t MAINNET_ASSUMED_CHAINSTATE_SIZE = 3;

    const BlockHash TESTNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("0000000005da3d23ab3558a3e5b7dac0f2e26d355fcd9093df5ca2df8b222354");
    const uint256 TESTNET_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000000006e7f452f70299a5f93");
    const uint64_t TESTNET_ASSUMED_BLOCKCHAIN_SIZE = 55;
    const uint64_t TESTNET_ASSUMED_CHAINSTATE_SIZE = 2;
} // namespace ChainParamsConstants

